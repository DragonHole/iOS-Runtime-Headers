/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface SFUFileInputStream : NSObject <SFUInputStream> {

	int mFd;
	BOOL mIsCachingDisabled;
	long long mStartOffset;
	long long mCurrentOffset;
	long long mEndOffset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)canSeek;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)seekToOffset:(long long)arg1 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3 ;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3 ;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 ;
-(void)dealloc;
-(long long)offset;
-(void)close;
@end
