/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:34 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OADBaseFontCollection.h>

@class NSMutableDictionary;

@interface OADFontCollection : OADBaseFontCollection {

	NSMutableDictionary* _scriptToFontMap;

}
-(id)fontForScript:(id)arg1 ;
-(void)setFont:(id)arg1 forScript:(id)arg2 ;
-(id)scripts;
-(BOOL)isEqualToFontCollection:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isEmpty;
@end

