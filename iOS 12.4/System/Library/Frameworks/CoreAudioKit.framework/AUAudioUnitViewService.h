/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:29 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/AUAudioUnitRemoteViewProtocol.h>

@class AURemoteExtensionContext, NSString;

@interface AUAudioUnitViewService : UIViewController <AUAudioUnitRemoteViewProtocol> {

	AURemoteExtensionContext* _extensionContext;

}

@property (assign) AURemoteExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)setExtensionContext:(AURemoteExtensionContext *)arg1 ;
-(void)connectToContextWithSessionID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_connectChildView:(/*^block*/id)arg1 ;
-(id)remoteViewControllerInterface;
-(void)loadView;
-(id)exportedInterface;
-(AURemoteExtensionContext *)extensionContext;
@end

