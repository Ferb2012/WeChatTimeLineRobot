/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIViewController.h"
#import "WCActionSheetDelegate.h"
#import "MMImgageBrowseViewDelegate.h"

@class MMAnimationTipView, UIImage, NSString, MMImageBrowseView;
@protocol CommonImageBrowserDelegate;

@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate> {
	MMImageBrowseView* m_imageView;
	UIImage* m_image;
	MMAnimationTipView* m_tipView;
	id m_singleTapOnNav;
	BOOL m_needDeleteAction;
	BOOL m_needActionSheet;
	id<CommonImageBrowserDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<CommonImageBrowserDelegate> m_delegate;
@property(assign, nonatomic) BOOL needActionSheet;
@property(assign, nonatomic) BOOL needDeleteAction;
@property(retain, nonatomic) id m_singleTapOnNav;
-(void).cxx_destruct;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)onSingleTapImageBrowseView;
-(void)onSavedPhotosAlbum:(id)album;
-(void)onOperate;
-(void)onSingleTapOnNavigationBar:(id)bar;
-(void)dealloc;
-(id)initWithImage:(id)image;
-(void)willAppear;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillBePoped:(BOOL)view;
-(void)viewDidLoad;
-(void)initView;
-(void)initImageView;
-(void)initNavigationBar;
-(void)exitFullScreen;
-(void)setFullScreen:(BOOL)screen;
-(void)removeNvGestureRecognizer;
-(void)addNvGestureRecognizer;
-(void)handleViewWillDisappear;
-(void)handleViewWillAppear;
-(void)showStatusBar;
-(void)hideStatusBar;
-(void)adjustImageViewRect;
-(void)viewWillLayoutSubviews;
@end

