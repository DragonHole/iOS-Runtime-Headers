/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:33 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PDFKit/PDFKit-Structs.h>
@interface PDFAKAnnotationSerializationHelper : NSObject
+(void)addAKAnnotation:(id)arg1 toAnnotationDictionary:(CFDictionaryRef)arg2 ;
+(id)akAnnotationFromCGPDFAnnotation:(CGPDFAnnotationRef)arg1 andDictionary:(CGPDFDictionaryRef)arg2 ;
+(BOOL)_annotationClassHasSeniority:(id)arg1 ;
+(BOOL)_shouldUseAKAnnotation:(id)arg1 toRepresentCGPDFDictionary:(CGPDFDictionaryRef)arg2 ;
@end

