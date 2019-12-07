/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PDFFormPrivateVars;

@interface PDFForm : NSObject <NSCopying> {

	PDFFormPrivateVars* _private;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDocument:(id)arg1 ;
-(void)setDocument:(id)arg1 ;
-(id)document;
-(CFDictionaryRef)createDictionaryRef;
-(id)stringValueForFieldNamed:(id)arg1 ;
-(void)setStringValue:(id)arg1 forFieldNamed:(id)arg2 postFormChangeNotification:(BOOL)arg3 ;
-(id)fieldNamed:(id)arg1 ;
-(void)addFormField:(id)arg1 ;
-(void)_commonResetForm:(id)arg1 inclusive:(BOOL)arg2 ;
-(void)addNeedsAppearanceToDictionaryRef:(CFDictionaryRef)arg1 ;
-(id)fieldNames;
-(id)defaultStringValueForFieldNamed:(id)arg1 ;
-(CGPDFStringRef)defaultDAStringRef;
-(void)removeFormFieldWithFieldName:(id)arg1 ;
-(void)resetFormForFields:(id)arg1 ;
-(void)resetFormExcludingFields:(id)arg1 ;
@end
