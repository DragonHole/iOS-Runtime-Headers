/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUOutputStream <SFUSimpleOutputStream>
@required
-(BOOL)canSeek;
-(id)inputStream;
-(id)closeLocalStream;
-(void)seekToOffset:(long long)arg1 whence:(int)arg2;
-(BOOL)canCreateInputStream;
-(long long)offset;
-(void)close;

@end

