/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ATMovingAverage : NSObject {

	unsigned long long _window;
	double* _values;
	unsigned long long _count;
	unsigned long long _index;

}

@property (nonatomic,readonly) unsigned long long window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) double average; 
-(double)average;
-(void)dealloc;
-(unsigned long long)window;
-(void)reset;
-(id)initWithWindow:(unsigned long long)arg1 ;
-(void)update:(double)arg1 ;
@end

