/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:44 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class DMFOSUpdate;

@interface DMFFetchAvailableOSUpdatesResultObject : CATTaskResultObject {

	DMFOSUpdate* _update;

}

@property (nonatomic,copy,readonly) DMFOSUpdate * update;              //@synthesize update=_update - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DMFOSUpdate *)update;
-(id)initWithUpdate:(id)arg1 ;
@end

