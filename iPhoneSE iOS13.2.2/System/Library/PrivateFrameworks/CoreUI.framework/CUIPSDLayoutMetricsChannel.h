/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:13:16 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject {

	CGRect _edgeInsets;
	NSString* _name;

}

@property (nonatomic,readonly) CGRect edgeInsets;              //@synthesize edgeInsets=_edgeInsets - In the implementation block
@property (nonatomic,retain) NSString * name;                  //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setEdgeInsets:(CGRect)arg1 ;
-(CGRect)edgeInsets;
-(void)sanitizeEdgeInsets;
-(id)initWithEdgeInsets:(CGRect)arg1 ;
@end

