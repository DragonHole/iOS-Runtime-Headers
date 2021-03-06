/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:03 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCFeedGroupEmittingOperation.h>

@class NSString;

@interface FCChannelIssuesGroupEmittingOperation : FCFeedGroupEmittingOperation {

	NSString* _channelIdentifier;

}

@property (nonatomic,retain) NSString * channelIdentifier;              //@synthesize channelIdentifier=_channelIdentifier - In the implementation block
-(void)performOperation;
-(NSString *)channelIdentifier;
-(id)initWithContext:(id)arg1 fromCursor:(id)arg2 toCursor:(id)arg3 groupEmitterIdentifier:(id)arg4 channelIdentifier:(id)arg5 ;
-(void)setChannelIdentifier:(NSString *)arg1 ;
-(id)init;
@end

