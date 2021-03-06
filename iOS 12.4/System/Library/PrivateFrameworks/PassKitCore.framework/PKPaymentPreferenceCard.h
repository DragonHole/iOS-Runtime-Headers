/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentPreference.h>

@interface PKPaymentPreferenceCard : PKPaymentPreference {

	BOOL _supportsNullSelection;

}

@property (assign,nonatomic) BOOL supportsNullSelection;              //@synthesize supportsNullSelection=_supportsNullSelection - In the implementation block
-(void)setSupportsNullSelection:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(BOOL)supportsDeletion;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(BOOL)supportsNullSelection;
@end

