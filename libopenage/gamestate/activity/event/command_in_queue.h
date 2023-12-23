// Copyright 2023-2023 the openage authors. See copying.md for legal info.

#pragma once

#include <cstddef>
#include <memory>

#include "time/time.h"


namespace openage {
namespace event {
class Event;
class EventLoop;
} // namespace event

namespace gamestate {
class GameEntity;
class GameState;

namespace activity {

/**
 * Primer for command in queue events in the activity system.
 *
 * @param time Current simulation time.
 * @param entity Game entity.
 * @param loop Event loop that the event is registered on.
 * @param state Game state.
 * @param next_id ID of the next node in the activity graph.
 *
 * @return Scheduled event.
 */
std::shared_ptr<openage::event::Event> primer_command_in_queue(const time::time_t &,
                                                               const std::shared_ptr<gamestate::GameEntity> &entity,
                                                               const std::shared_ptr<openage::event::EventLoop> &loop,
                                                               const std::shared_ptr<gamestate::GameState> &state,
                                                               size_t next_id);

} // namespace activity
} // namespace gamestate
} // namespace openage
