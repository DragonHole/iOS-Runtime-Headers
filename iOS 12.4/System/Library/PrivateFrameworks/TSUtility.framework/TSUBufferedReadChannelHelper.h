/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUStreamReadChannel.h>

@class TSUBufferedReadChannel, NSString;

@interface TSUBufferedReadChannelHelper : NSObject <TSUStreamReadChannel> {

	TSUBufferedReadChannel* _bufferedReadChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)readWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithBufferedReadChannel:(id)arg1 ;
-(void)close;
@end
