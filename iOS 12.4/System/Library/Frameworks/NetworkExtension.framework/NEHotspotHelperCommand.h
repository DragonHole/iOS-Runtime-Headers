/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkExtension/NetworkExtension-Structs.h>
@class NSString, NEHotspotNetwork, NSArray;

@interface NEHotspotHelperCommand : NSObject {

	CNPluginCommandRef _command;

}

@property (assign) CNPluginCommandRef command;                //@synthesize command=_command - In the implementation block
@property (readonly) NSString * interfaceName; 
@property (readonly) long long commandType; 
@property (readonly) NEHotspotNetwork * network; 
@property (readonly) NSArray * networkList; 
-(NSString *)interfaceName;
-(NSArray *)networkList;
-(id)createResponse:(long long)arg1 ;
-(id)createTCPConnection:(id)arg1 ;
-(id)createUDPSession:(id)arg1 ;
-(NEHotspotNetwork *)network;
-(CNPluginCommandRef)command;
-(void)setCommand:(CNPluginCommandRef)arg1 ;
-(long long)commandType;
-(id)initWithCommand:(CNPluginCommandRef)arg1 ;
-(void)dealloc;
-(id)description;
@end

