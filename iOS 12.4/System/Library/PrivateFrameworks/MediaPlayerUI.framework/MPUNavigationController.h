/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>

@interface MPUNavigationController : UINavigationController {

	BOOL _supportsStandardInterfaceOrientations;
	/*^block*/id _overrideSupportedInterfaceOrientationsHandler;

}

@property (nonatomic,copy) id overrideSupportedInterfaceOrientationsHandler;              //@synthesize overrideSupportedInterfaceOrientationsHandler=_overrideSupportedInterfaceOrientationsHandler - In the implementation block
@property (assign,nonatomic) BOOL supportsStandardInterfaceOrientations;                  //@synthesize supportsStandardInterfaceOrientations=_supportsStandardInterfaceOrientations - In the implementation block
-(id)overrideSupportedInterfaceOrientationsHandler;
-(void)setOverrideSupportedInterfaceOrientationsHandler:(id)arg1 ;
-(BOOL)supportsStandardInterfaceOrientations;
-(void)setSupportsStandardInterfaceOrientations:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
@end

