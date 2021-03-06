/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:42 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUtils/CoreUtils-Structs.h>
@interface CUBluetoothFindDeviceRequest : NSObject {

	SCD_Struct_CU3 _address;
	/*^block*/id _completion;

}

@property (assign,nonatomic) SCD_Struct_CU3 address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,copy) id completion;                         //@synthesize completion=_completion - In the implementation block
-(void)setAddress:(SCD_Struct_CU3)arg1 ;
-(SCD_Struct_CU3)address;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
@end

