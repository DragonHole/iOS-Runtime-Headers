/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:32 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShareSheet/_UIActivityItemCustomization.h>
#import <libobjc.A.dylib/_UIActivityItemCustomizationPicker.h>

@protocol _UIActivityItemCustomizationPicker <NSObject>
@property (nonatomic,readonly) long long selectedOptionIndex; 
@property (nonatomic,readonly) long long previousSelectedOptionIndex; 
@required
-(long long)selectedOptionIndex;
-(long long)previousSelectedOptionIndex;

@end


@class NSArray, NSString;

@interface _UIActivityItemCustomizationPicker : _UIActivityItemCustomization <_UIActivityItemCustomizationPicker> {

	long long _selectedOptionIndex;
	long long _previousSelectedOptionIndex;
	NSArray* _optionTitles;
	/*^block*/id __handler;

}

@property (setter=_setHandler:,nonatomic,copy) id _handler;                        //@synthesize _handler=__handler - In the implementation block
@property (nonatomic,readonly) NSArray * _optionTitles;                            //@synthesize optionTitles=_optionTitles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long selectedOptionIndex; 
@property (nonatomic,readonly) long long previousSelectedOptionIndex; 
-(id)_handler;
-(NSArray *)_optionTitles;
-(long long)selectedOptionIndex;
-(void)_setSelectedOptionIndex:(long long)arg1 ;
-(void)_setHandler:(/*^block*/id)arg1 ;
-(id)initWithIdentifier:(id)arg1 optionTitles:(id)arg2 selectedOptionIndex:(long long)arg3 footerText:(id)arg4 ;
-(long long)previousSelectedOptionIndex;
@end

