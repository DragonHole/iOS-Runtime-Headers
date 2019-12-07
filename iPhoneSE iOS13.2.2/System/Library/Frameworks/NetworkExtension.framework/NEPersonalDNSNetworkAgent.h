/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:14:25 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NENetworkAgent.h>

@class NSArray;

@interface NEPersonalDNSNetworkAgent : NENetworkAgent {

	NSArray* _settings;

}

@property (retain) NSArray * settings;              //@synthesize settings=_settings - In the implementation block
+(id)agentType;
+(id)agentFromData:(id)arg1 ;
-(NSArray *)settings;
-(void)setSettings:(NSArray *)arg1 ;
-(id)copyAgentData;
@end
