/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:01 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteUI.framework/TVRemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRUIDeviceDelegate <NSObject>
@required
-(void)deviceBeganConnecting:(id)arg1;
-(void)deviceDidConnect:(id)arg1;
-(void)deviceDidDisconnect:(id)arg1 reason:(long long)arg2 error:(id)arg3;
-(void)deviceDidEncounterAuthenticationChallenge:(id)arg1;
-(void)device:(id)arg1 beganTextEditingWithAttributes:(id)arg2 initialText:(id)arg3;
-(void)device:(id)arg1 endedTextEditingWithAttributes:(id)arg2 endingText:(id)arg3;
-(void)device:(id)arg1 didUpdateText:(id)arg2;
-(void)device:(id)arg1 didUpdateAttributes:(id)arg2;
-(void)device:(id)arg1 needsMediaControls:(id)arg2;
-(void)deviceHidesMediaControls:(id)arg1;
-(void)device:(id)arg1 supportsVolumeControl:(BOOL)arg2;

@end

