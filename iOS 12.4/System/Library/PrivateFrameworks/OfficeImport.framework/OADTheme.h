/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:35 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, OADBaseStyles, OADDrawableDefaults;

@interface OADTheme : NSObject {

	NSString* mName;
	OADBaseStyles* mBaseStyles;
	OADDrawableDefaults* mDrawableDefaults;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) OADBaseStyles * baseStyles; 
@property (nonatomic,readonly) OADDrawableDefaults * drawableDefaults; 
-(OADBaseStyles *)baseStyles;
-(OADDrawableDefaults *)drawableDefaults;
-(void)validateTheme;
-(void)setBaseStyles:(OADBaseStyles *)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id)description;
-(BOOL)isEmpty;
@end

