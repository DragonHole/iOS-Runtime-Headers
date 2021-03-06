/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <PDFKit/PDFAction.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFActionResetFormPrivateVars, NSArray;

@interface PDFActionResetForm : PDFAction <NSCopying> {

	PDFActionResetFormPrivateVars* _private2;

}

@property (nonatomic,copy) NSArray * fields; 
@property (assign,nonatomic) BOOL fieldsIncludedAreCleared; 
-(const CFDictionaryRef)createDictionaryRef;
-(void)addFlagsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)initWithActionDictionary:(CGPDFDictionaryRef)arg1 forDocument:(id)arg2 forPage:(id)arg3 ;
-(void)addFieldsToDictionaryRef:(CFDictionaryRef)arg1 ;
-(BOOL)fieldsIncludedAreCleared;
-(void)setFieldsIncludedAreCleared:(BOOL)arg1 ;
-(void)setFields:(NSArray *)arg1 ;
-(NSArray *)fields;
-(id)toolTip;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)commonInit;
@end

