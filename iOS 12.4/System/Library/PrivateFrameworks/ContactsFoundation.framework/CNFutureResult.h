/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:18 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError;

@interface CNFutureResult : NSObject {

	id _result;
	NSError* _error;

}

@property (nonatomic,retain) id result;                  //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(void)setResult:(id)arg1 error:(id)arg2 ;
-(void)setResult:(id)arg1 ;
-(void)dealloc;
-(id)result;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end
