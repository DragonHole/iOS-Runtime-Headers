/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:23:39 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppSupportUI/NUIContainerGridView.h>

@class NSMutableArray;

@interface TLKKeyValueGridView : NUIContainerGridView {

	NSMutableArray* _keyLabels;
	NSMutableArray* _valueLabels;
	unsigned long long _style;

}

@property (retain) NSMutableArray * keyLabels;                      //@synthesize keyLabels=_keyLabels - In the implementation block
@property (retain) NSMutableArray * valueLabels;                    //@synthesize valueLabels=_valueLabels - In the implementation block
@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(void)setStylesOnLabels:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(void)updateWithTuples:(id)arg1 valueColumnIsTrailing:(BOOL)arg2 truncateKey:(BOOL)arg3 ;
-(NSMutableArray *)keyLabels;
-(void)setKeyLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)valueLabels;
-(void)setValueLabels:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
@end

