/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:04 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontAttributesConstructor.h>

@protocol SXFontAttributesConstructor <NSObject>
@required
-(id)fontAttributesForFontDescriptions:(id)arg1;
-(id)fontNameForAttributes:(id)arg1;

@end


@protocol SXFontIndex;
@class NSString;

@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor> {

	id<SXFontIndex> _fontIndex;

}

@property (nonatomic,readonly) id<SXFontIndex> fontIndex;              //@synthesize fontIndex=_fontIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fontAttributesForFontDescriptions:(id)arg1 ;
-(id)fontNameForAttributes:(id)arg1 ;
-(id)initWithFontIndex:(id)arg1 ;
-(long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2 ;
-(id<SXFontIndex>)fontIndex;
@end

