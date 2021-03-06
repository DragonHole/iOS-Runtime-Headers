/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCDisposable.h>

@class NSString;

@interface FCObserver : NSObject <FCDisposable> {

	unsigned long long _token;
	id _keepAliveObject;
	/*^block*/id _observerBlock;

}

@property (assign,nonatomic) unsigned long long token;               //@synthesize token=_token - In the implementation block
@property (assign,nonatomic,__weak) id keepAliveObject;              //@synthesize keepAliveObject=_keepAliveObject - In the implementation block
@property (nonatomic,copy) id observerBlock;                         //@synthesize observerBlock=_observerBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToken:(unsigned long long)arg1 ;
-(void)setKeepAliveObject:(id)arg1 ;
-(void)disposeOn:(id)arg1 ;
-(void)dispose;
-(id)keepAliveObject;
-(id)observerBlock;
-(void)setObserverBlock:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(unsigned long long)token;
-(void)setToken:(unsigned long long)arg1 ;
@end

