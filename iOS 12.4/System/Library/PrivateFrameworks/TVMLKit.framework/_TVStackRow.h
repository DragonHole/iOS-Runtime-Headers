/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVMLKit/TVMLKit-Structs.h>
@interface _TVStackRow : NSObject {

	BOOL _hosted;
	BOOL _bounded;
	long long _sectionIndex;
	TVRowMetrics _rowMetrics;

}

@property (assign,nonatomic) TVRowMetrics rowMetrics;                    //@synthesize rowMetrics=_rowMetrics - In the implementation block
@property (assign,getter=isHosted,nonatomic) BOOL hosted;                //@synthesize hosted=_hosted - In the implementation block
@property (assign,getter=isBounded,nonatomic) BOOL bounded;              //@synthesize bounded=_bounded - In the implementation block
@property (assign,nonatomic) long long sectionIndex;                     //@synthesize sectionIndex=_sectionIndex - In the implementation block
-(BOOL)isHosted;
-(void)setSectionIndex:(long long)arg1 ;
-(long long)sectionIndex;
-(void)setHosted:(BOOL)arg1 ;
-(TVRowMetrics)rowMetrics;
-(void)setRowMetrics:(TVRowMetrics)arg1 ;
-(BOOL)isBounded;
-(void)setBounded:(BOOL)arg1 ;
@end

