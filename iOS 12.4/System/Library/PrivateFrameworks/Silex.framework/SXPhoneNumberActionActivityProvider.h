/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXHost, SXContactsPresenter, SXMessagePresenter, SXDeviceCapabilities;
@class NSString;

@interface SXPhoneNumberActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXHost> _host;
	id<SXContactsPresenter> _contactsPresenter;
	id<SXMessagePresenter> _messagePresenter;
	id<SXDeviceCapabilities> _deviceCapabilities;

}

@property (nonatomic,readonly) id<SXHost> host;                                          //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) id<SXContactsPresenter> contactsPresenter;                //@synthesize contactsPresenter=_contactsPresenter - In the implementation block
@property (nonatomic,readonly) id<SXMessagePresenter> messagePresenter;                  //@synthesize messagePresenter=_messagePresenter - In the implementation block
@property (nonatomic,readonly) id<SXDeviceCapabilities> deviceCapabilities;              //@synthesize deviceCapabilities=_deviceCapabilities - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)activityGroupForAction:(id)arg1 ;
-(void)addToContacts:(id)arg1 ;
-(id<SXContactsPresenter>)contactsPresenter;
-(id)initWithHost:(id)arg1 contactsPresenter:(id)arg2 messagePresenter:(id)arg3 deviceCapabilities:(id)arg4 ;
-(void)call:(id)arg1 showDialog:(BOOL)arg2 ;
-(void)faceTime:(id)arg1 ;
-(id<SXMessagePresenter>)messagePresenter;
-(void)message:(id)arg1 ;
-(id<SXDeviceCapabilities>)deviceCapabilities;
-(void)copy:(id)arg1 ;
-(id<SXHost>)host;
@end

