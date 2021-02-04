/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAMPGetState, NSArray;

@interface SAMPGetStateResponseRemote : SABaseClientBoundCommand

@property (nonatomic,retain) SAMPGetState * getState; 
@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getStateResponseRemote;
+(id)getStateResponseRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SAMPGetState *)getState;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(void)setGetState:(SAMPGetState *)arg1 ;
-(id)groupIdentifier;
@end
