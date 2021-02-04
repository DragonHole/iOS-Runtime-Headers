/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (nonatomic,copy) NSString * hashedRouteId; 
@property (nonatomic,copy) NSString * routeType; 
+(id)setAirPlayRoute;
+(id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)routeType;
-(void)setRouteType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteId;
-(void)setHashedRouteId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(id)groupIdentifier;
@end
