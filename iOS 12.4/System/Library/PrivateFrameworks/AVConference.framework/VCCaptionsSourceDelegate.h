/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCCaptionsSourceDelegate <NSObject>
@required
-(void)streamToken:(long long)arg1 didEnableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didDisableCaptions:(BOOL)arg2 error:(id)arg3;
-(void)streamToken:(long long)arg1 didStartCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didStopCaptioningWithReason:(unsigned char)arg2;
-(void)streamToken:(long long)arg1 didUpdateCaptions:(id)arg2;

@end

