
require('adminsrv/object/rootobject')
require('lib/http2')
require('lib/mydb')
require('adminsrv/component/websocket')
require('adminsrv/web/account/main')
require('adminsrv/web/admin/main')
require('adminsrv/web/admin/server/main')
require('adminsrv/web/cms/account/main')
require('adminsrv/web/cms/default/model')
require('adminsrv/web/cms/default/main')

Config.httpsrv.template_dir = string.format('%s/adminsrv/web/', Config.asset_dir)
Config.httpsrv.static_dir = string.format('%s/adminsrv/static/', Config.asset_dir)

function main()
    mydb.connect(Config.mydbconf)
    --local r = mydb.test:select('select * from user')
    --print(Json.encode(r))
    mynode:create_gameobject_local('RootGameObject')
end
