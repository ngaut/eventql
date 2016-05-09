/**
 * This file is part of the "libcsql" project
 *   Copyright (c) 2015 Paul Asmuth, zScale Technology GmbH
 *
 * libcsql is free software: you can redistribute it and/or modify it under
 * the terms of the GNU General Public License v3.0. You should have received a
 * copy of the GNU General Public License along with this program. If not, see
 * <http://www.gnu.org/licenses/>.
 */
#pragma once
#include <eventql/sql/scheduler.h>

using namespace stx;

namespace csql {
class Transaction;

class LocalScheduler : public Scheduler {
public:

  ScopedPtr<ResultCursor> execute(QueryPlan* query_plan, size_t stmt_idx) override;

};

} // namespace csql
