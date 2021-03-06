/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:23 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSTextBlock.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTextTable;

@interface NSTextTableBlock : NSTextBlock <NSSecureCoding> {

	NSTextTable* _table;
	long long _rowNum;
	long long _colNum;
	long long _rowSpan;
	long long _colSpan;
	void* _tableBlockPrimary;
	void* _tableBlockSecondary;

}
+(BOOL)supportsSecureCoding;
+(void)initialize;
-(void)drawBackgroundWithFrame:(CGRect)arg1 inView:(id)arg2 characterRange:(NSRange)arg3 layoutManager:(id)arg4 ;
-(CGRect)rectForLayoutAtPoint:(CGPoint)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(CGRect)boundsRectForContentRect:(CGRect)arg1 inRect:(CGRect)arg2 textContainer:(id)arg3 characterRange:(NSRange)arg4 ;
-(void)_setRowSpan:(long long)arg1 ;
-(void)_setColumnSpan:(long long)arg1 ;
-(long long)startingColumn;
-(long long)startingRow;
-(id)initWithTable:(id)arg1 startingRow:(long long)arg2 rowSpan:(long long)arg3 startingColumn:(long long)arg4 columnSpan:(long long)arg5 ;
-(long long)columnSpan;
-(long long)rowSpan;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)table;
@end

