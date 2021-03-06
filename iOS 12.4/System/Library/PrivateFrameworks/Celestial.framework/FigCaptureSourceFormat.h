/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:51 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/FigXPCCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding, NSSecureCoding> {

	NSDictionary* _formatDictionary;
	opaqueCMFormatDescriptionRef _formatDescription;
	SCD_Struct_BW13 _previewDimensions;

}

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
@property (readonly) unsigned format; 
@property (getter=isDefaultActiveFormat,readonly) BOOL defaultActiveFormat; 
@property (getter=isExperimental,readonly) BOOL experimental; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithFigCaptureStreamFormatDictionary:(id)arg1 ;
-(BOOL)isDefaultActiveFormat;
-(BOOL)isExperimental;
-(unsigned)mediaType;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned)format;
@end

