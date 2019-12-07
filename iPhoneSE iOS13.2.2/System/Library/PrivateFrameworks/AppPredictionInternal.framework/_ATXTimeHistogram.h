/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:58 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/AppPredictionInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ATXTimeHistogram : NSObject <NSSecureCoding> {

	unsigned _count;
	SCD_Struct_AT54* _entries;
	unsigned short _bucketCount;
	BOOL _applyFilter;

}

@property (nonatomic,readonly) unsigned short pointsPerTimeInterval; 
@property (nonatomic,readonly) BOOL applyFilter;                                  //@synthesize applyFilter=_applyFilter - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)enumerate:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned short)pointsPerTimeInterval;
-(BOOL)applyFilter;
@end
