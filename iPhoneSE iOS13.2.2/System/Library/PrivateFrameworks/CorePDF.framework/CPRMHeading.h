/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CorePDF/CorePDF-Structs.h>
@interface CPRMHeading : NSObject {

	CGPDFNodeRef _node;
	CGPDFPageRef _page;
	SCD_Struct_CP17 _textRange;

}

@property (readonly) CGPDFPageRef page; 
@property (assign) SCD_Struct_CP17 textRange;              //@synthesize textRange=_textRange - In the implementation block
-(CGRect)bounds;
-(CGPDFPageRef)page;
-(SCD_Struct_CP17)textRange;
-(void)setTextRange:(SCD_Struct_CP17)arg1 ;
-(id)initWithNode:(CGPDFNodeRef)arg1 onPage:(CGPDFPageRef)arg2 ;
@end
