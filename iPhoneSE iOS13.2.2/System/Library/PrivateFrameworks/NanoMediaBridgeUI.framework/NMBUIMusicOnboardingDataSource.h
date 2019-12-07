/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:22:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NanoMediaBridgeUI.framework/NanoMediaBridgeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NMBUIOnboardingDataSource.h>

@class NSArray, NSString;

@interface NMBUIMusicOnboardingDataSource : NSObject <NMBUIOnboardingDataSource> {

	NSArray* _recommendationSpecifiers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)instructionIconImage;
-(id)instructionTitle;
-(id)instructionDescription;
-(id)instructionConfirmTitle;
-(void)persistConfigurations;
-(void)_setRecommendationSelected:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_recommendationSelected:(id)arg1 ;
-(id)configurationPlaceholderArtworkImage;
-(id)welcomeTitle;
-(id)welcomeDescription;
-(id)welcomeIconImage;
-(id)arrowIconImage;
-(id)welcomeConfirmTitle;
-(id)welcomeCancelTitle;
-(id)configurationTitle;
-(id)configurationHeaderDescription;
-(id)configurationFooterDescription;
-(id)configurationConfirmTitle;
-(id)configurationConfirmSubtitle;
-(long long)numberOfConfigurationOptions;
-(id)optionSpecifierForRow:(long long)arg1 ;
-(id)initWithRecommendations:(id)arg1 ;
@end
