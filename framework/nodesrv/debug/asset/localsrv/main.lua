

require('localsrv/component/telnetsrv')
require('localsrv/object/mainobject')
require('localsrv/module/admin/main')
require('localsrv/module/hall/main')
require('localsrv/module/login/main')
require('localsrv/module/player/main')

function main()
    mysrv:create_entity_local('MainObject')
end


