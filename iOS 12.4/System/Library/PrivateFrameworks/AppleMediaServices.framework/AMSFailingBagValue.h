/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:16 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleMediaServices/AMSFrozenBagValue.h>

@class NSError;

@interface AMSFailingBagValue : AMSFrozenBagValue {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)initWithKey:(id)arg1 valueType:(unsigned long long)arg2 error:(id)arg3 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)valueWithCompletion:(/*^block*/id)arg1 ;
@end
