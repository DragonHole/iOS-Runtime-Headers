/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:26 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSError;

@interface _CPLEngineSyncLastError : NSObject {

	NSDate* _date;
	NSError* _error;

}

@property (nonatomic,copy) NSDate * date;                //@synthesize date=_date - In the implementation block
@property (nonatomic,copy) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSDate *)date;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
@end
