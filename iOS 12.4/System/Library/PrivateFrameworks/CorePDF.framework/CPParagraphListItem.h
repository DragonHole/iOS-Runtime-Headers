/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:20:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPList;

@interface CPParagraphListItem : NSObject <CPDisposable> {

	CPList* list;
	int number;
	CFArrayRef paragraphs;

}

@property (nonatomic,retain) CPList * list; 
@property (assign,nonatomic) int number; 
-(void)setList:(CPList *)arg1 ;
-(void)addParagraph:(id)arg1 ;
-(int)number;
-(void)setNumber:(int)arg1 ;
-(void)dispose;
-(unsigned)paragraphCount;
-(void)finalize;
-(id)paragraphAtIndex:(unsigned)arg1 ;
-(id)init;
-(void)dealloc;
-(CPList *)list;
@end

