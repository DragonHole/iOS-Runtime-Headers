/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:59 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SignpostSupportObjectFilter : NSObject {

	/*^block*/id _filterBlock;

}

@property (nonatomic,copy,readonly) id filterBlock;              //@synthesize filterBlock=_filterBlock - In the implementation block
-(BOOL)passesObject:(id)arg1 ;
-(id)initWithFilterBlock:(/*^block*/id)arg1 ;
-(id)filterBlock;
@end

