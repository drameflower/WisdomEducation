//
//  NEEduRoomConfig.h
//  EduLogic
//
//  Created by Groot on 2021/5/18.
//

#import <Foundation/Foundation.h>
#import "NEEduRoleConfig.h"

NS_ASSUME_NONNULL_BEGIN

@interface NEEduRoomConfig : NSObject
@property (nonatomic ,strong) NEEduRoleConfig *roleConfigs;
@property (nonatomic ,copy) NSString *sceneType;
//@property (nonatomic ,strong) Permissions *permissions;
@end

NS_ASSUME_NONNULL_END
