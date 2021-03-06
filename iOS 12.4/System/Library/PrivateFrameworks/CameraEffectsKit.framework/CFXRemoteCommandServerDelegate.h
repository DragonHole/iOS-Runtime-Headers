/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:19 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CFXRemoteCommandServerDelegate
@required
-(void)remoteCommandServer:(id)arg1 didReceiveAddShapeCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveAddStickerCommandWithURL:(id)arg2 offset:(CGPoint)arg3 scale:(double)arg4 rotation:(double)arg5;
-(void)remoteCommandServer:(id)arg1 didReceiveAddTextCommandWithIdentifier:(id)arg2 string:(id)arg3;
-(void)remoteCommandServer:(id)arg1 didReceiveRemoveEffectsCommandWithTypeIdentifiers:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetAnimojiCommandWithIdentifier:(id)arg2;
-(void)remoteCommandServer:(id)arg1 didReceiveSetFilterCommandWithIdentifier:(id)arg2;

@end

