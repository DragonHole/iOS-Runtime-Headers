/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:49 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NEExtensionProviderProtocol <NSObject>
@required
-(void)wake;
-(void)sleepWithCompletionHandler:(/*^block*/id)arg1;
-(void)setConfiguration:(id)arg1 extensionIdentifier:(id)arg2 deviceIdentifier:(id)arg3;
-(void)startWithOptions:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)stopWithReason:(int)arg1;
-(void)dispose;

@end
