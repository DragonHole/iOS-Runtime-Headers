/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/AFBluetoothDeviceInfoMutating.h>

@class AFBluetoothDeviceInfo, NSString, NSUUID;

@interface _AFBluetoothDeviceInfoMutation : NSObject <AFBluetoothDeviceInfoMutating> {

	AFBluetoothDeviceInfo* _baseModel;
	NSString* _address;
	NSUUID* _deviceUID;
	unsigned _vendorID;
	unsigned _productID;
	BOOL _isAdvancedAppleAudioDevice;
	BOOL _supportsInEarDetection;
	BOOL _supportsVoiceTrigger;
	struct {
		unsigned isDirty : 1;
		unsigned hasAddress : 1;
		unsigned hasDeviceUID : 1;
		unsigned hasVendorID : 1;
		unsigned hasProductID : 1;
		unsigned hasIsAdvancedAppleAudioDevice : 1;
		unsigned hasSupportsInEarDetection : 1;
		unsigned hasSupportsVoiceTrigger : 1;
	}  _mutationFlags;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAddress:(id)arg1 ;
-(id)initWithBaseModel:(id)arg1 ;
-(void)setDeviceUID:(id)arg1 ;
-(void)setIsAdvancedAppleAudioDevice:(BOOL)arg1 ;
-(void)setSupportsInEarDetection:(BOOL)arg1 ;
-(void)setSupportsVoiceTrigger:(BOOL)arg1 ;
-(void)setVendorID:(unsigned)arg1 ;
-(void)setProductID:(unsigned)arg1 ;
-(id)generate;
-(id)init;
@end

