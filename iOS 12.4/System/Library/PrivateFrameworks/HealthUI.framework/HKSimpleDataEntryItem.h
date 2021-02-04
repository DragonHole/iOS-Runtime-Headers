/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:57 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKSimpleDataEntryItemDelegate, HKSimpleDataEntryItemToolbarDelegate;
@interface HKSimpleDataEntryItem : NSObject {

	id<HKSimpleDataEntryItemDelegate> _delegate;
	id<HKSimpleDataEntryItemToolbarDelegate> _toolbarDelegate;
	unsigned long long _placeholderType;

}

@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HKSimpleDataEntryItemToolbarDelegate> toolbarDelegate;              //@synthesize toolbarDelegate=_toolbarDelegate - In the implementation block
@property (assign,nonatomic) unsigned long long placeholderType;                                           //@synthesize placeholderType=_placeholderType - In the implementation block
-(unsigned long long)placeholderType;
-(void)localeDidChange:(id)arg1 ;
-(id)accessoryToolbar;
-(void)updateCellDisplay;
-(id)formattedKeyAndValue;
-(void)toolbarPrevButtonPressed:(id)arg1 ;
-(void)toolbarNextButtonPressed:(id)arg1 ;
-(void)toolbarDoneButtonPressed:(id)arg1 ;
-(void)setPlaceholderType:(unsigned long long)arg1 ;
-(void)setToolbarDelegate:(id<HKSimpleDataEntryItemToolbarDelegate>)arg1 ;
-(id<HKSimpleDataEntryItemToolbarDelegate>)toolbarDelegate;
-(void)setDelegate:(id<HKSimpleDataEntryItemDelegate>)arg1 ;
-(id<HKSimpleDataEntryItemDelegate>)delegate;
-(id)cell;
-(void)beginEditing;
@end
