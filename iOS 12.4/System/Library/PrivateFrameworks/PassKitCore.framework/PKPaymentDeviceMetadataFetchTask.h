/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PKPaymentDeviceMetadata;

@interface PKPaymentDeviceMetadataFetchTask : NSObject {

	PKPaymentDeviceMetadata* _deviceMetadata;
	unsigned long long _remaningFields;
	unsigned long long _requestedFields;
	/*^block*/id _completion;

}

@property (nonatomic,retain) PKPaymentDeviceMetadata * deviceMetadata;              //@synthesize deviceMetadata=_deviceMetadata - In the implementation block
@property (assign,nonatomic) unsigned long long remaningFields;                     //@synthesize remaningFields=_remaningFields - In the implementation block
@property (assign,nonatomic) unsigned long long requestedFields;                    //@synthesize requestedFields=_requestedFields - In the implementation block
@property (nonatomic,copy) id completion;                                           //@synthesize completion=_completion - In the implementation block
-(PKPaymentDeviceMetadata *)deviceMetadata;
-(unsigned long long)remaningFields;
-(void)setRemaningFields:(unsigned long long)arg1 ;
-(void)setRequestedFields:(unsigned long long)arg1 ;
-(unsigned long long)requestedFields;
-(void)setDeviceMetadata:(PKPaymentDeviceMetadata *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

