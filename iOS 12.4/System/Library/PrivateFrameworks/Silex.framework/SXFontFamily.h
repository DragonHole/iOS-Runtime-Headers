/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:00 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontFamily.h>
@class NSString, NSSet;


@protocol SXFontFamily <NSObject>
@property (nonatomic,readonly) NSString * familyName; 
@property (nonatomic,readonly) NSSet * fontFaces; 
@required
-(NSSet *)fontFaces;
-(NSString *)familyName;

@end


@class NSString, NSSet;

@interface SXFontFamily : NSObject <SXFontFamily> {

	NSString* _familyName;
	NSSet* _fontFaces;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * familyName;               //@synthesize familyName=_familyName - In the implementation block
@property (nonatomic,readonly) NSSet * fontFaces;                   //@synthesize fontFaces=_fontFaces - In the implementation block
-(NSSet *)fontFaces;
-(id)initWithFamilyName:(id)arg1 faces:(id)arg2 ;
-(NSString *)description;
-(NSString *)familyName;
@end

