/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray;

@interface SAPhoneVoiceMailSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * autoPlay; 
@property (nonatomic,copy) NSArray * calls; 
@property (nonatomic,copy) NSArray * playVoiceMailCommands; 
@property (nonatomic,retain) id<SAClientBoundCommand> postPlayCommand; 
+(id)voiceMailSnippet;
+(id)voiceMailSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)calls;
-(void)setCalls:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)autoPlay;
-(void)setAutoPlay:(NSNumber *)arg1 ;
-(NSArray *)playVoiceMailCommands;
-(void)setPlayVoiceMailCommands:(NSArray *)arg1 ;
-(id<SAClientBoundCommand>)postPlayCommand;
-(void)setPostPlayCommand:(id<SAClientBoundCommand>)arg1 ;
@end

