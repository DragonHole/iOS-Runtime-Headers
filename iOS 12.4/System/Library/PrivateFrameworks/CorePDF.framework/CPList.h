/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPParagraphListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPParagraphListItem * parentItem; 
-(void)setParentItem:(CPParagraphListItem *)arg1 ;
-(CPParagraphListItem *)parentItem;
-(BOOL)containsParagraph:(id)arg1 ;
-(BOOL)isMultilevel;
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
-(id)itemAtIndex:(unsigned)arg1 ;
-(void)dispose;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(int)type;
-(void)setType:(int)arg1 ;
-(unsigned)itemCount;
-(void)addItem:(id)arg1 ;
@end

