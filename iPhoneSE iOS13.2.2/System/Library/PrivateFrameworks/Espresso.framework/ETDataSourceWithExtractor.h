/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:14 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ETDataSource.h>

@protocol ETDataSource;
@class ETImageDescriptorExtractor;

@interface ETDataSourceWithExtractor : NSObject <ETDataSource> {

	id<ETDataSource> _source;
	ETImageDescriptorExtractor* _extractor;

}
-(int)numberOfDataPoints;
-(id)dataPointAtIndex:(int)arg1 ;
-(id)initWithDataSource:(id)arg1 extractor:(id)arg2 ;
@end

