/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKAccountWebServicePreferencesRequest.h>

@class PKAccountPreferences;

@interface PKAccountWebServiceUpdatePreferencesRequest : PKAccountWebServicePreferencesRequest {

	PKAccountPreferences* _preferences;

}

@property (nonatomic,copy) PKAccountPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
-(id)_urlRequestWithAppleAccountInformation:(id)arg1 ;
-(void)setPreferences:(PKAccountPreferences *)arg1 ;
-(PKAccountPreferences *)preferences;
@end

